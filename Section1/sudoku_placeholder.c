#include <gtk/gtk.h>

#define SIZE 9

GtkWidget *cells[SIZE][SIZE];

void load_sudoku_grid(GtkWidget *grid, int sudoku[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            char buf[2];
            snprintf(buf, 2, "%d", sudoku[i][j] ? sudoku[i][j] : 0);
            cells[i][j] = gtk_entry_new();
            gtk_entry_set_text(GTK_ENTRY(cells[i][j]), buf);
            gtk_entry_set_max_length(GTK_ENTRY(cells[i][j]), 1);
            gtk_grid_attach(GTK_GRID(grid), cells[i][j], j, i, 1, 1);
        }
    }
}

void solve_callback(GtkWidget *widget, gpointer data) {
    int sudoku[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            const char *text = gtk_entry_get_text(GTK_ENTRY(cells[i][j]));
            sudoku[i][j] = (text[0] >= '1' && text[0] <= '9') ? text[0] - '0' : 0;
        }
    }
    if (solveSudoku(sudoku, 0, 0)) {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                char buf[2];
                snprintf(buf, 2, "%d", sudoku[i][j]);
                gtk_entry_set_text(GTK_ENTRY(cells[i][j]), buf);
            }
        }
    } else {
        g_print("No solution exists.\n");
    }
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Sudoku Solver");
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    GtkWidget *grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    int sudoku[SIZE][SIZE] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    load_sudoku_grid(grid, sudoku);

    GtkWidget *button = gtk_button_new_with_label("Solve");
    g_signal_connect(button, "clicked", G_CALLBACK(solve_callback), NULL);
    gtk_grid_attach(GTK_GRID(grid), button, 0, SIZE, SIZE, 1);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}

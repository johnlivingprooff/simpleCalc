#include <gtk/gtk.h>

// Function to perform addition
static void add(GtkWidget *widget, gpointer data)
{
    g_print("Performing addition\n");
	    // Perform addition operation here
		}

		// Function to perform subtraction
		static void subtract(GtkWidget *widget, gpointer data)
		{
		    g_print("Performing subtraction\n");
			    // Perform subtraction operation here
				}

				int main(int argc, char *argv[])
				{
				    gtk_init(&argc, &argv);

					    // Create the main window
						    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
							    gtk_window_set_title(GTK_WINDOW(window), "Simple Calculator");
								    gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);
									    gtk_container_set_border_width(GTK_CONTAINER(window), 10);

										    // Create buttons for addition and subtraction
											    GtkWidget *addButton = gtk_button_new_with_label("Add");
												    GtkWidget *subtractButton = gtk_button_new_with_label("Subtract");

													    // Connect button signals to their respective functions
														    g_signal_connect(addButton, "clicked", G_CALLBACK(add), NULL);
															    g_signal_connect(subtractButton, "clicked", G_CALLBACK(subtract), NULL);

																    // Create a vertical box to hold the buttons
																	    GtkWidget *vbox = gtk_vbox_new(TRUE, 5);
																		    gtk_box_pack_start(GTK_BOX(vbox), addButton, TRUE, TRUE, 0);
																			    gtk_box_pack_start(GTK_BOX(vbox), subtractButton, TRUE, TRUE, 0);

																				    // Add the vertical box to the main window
																					    gtk_container_add(GTK_CONTAINER(window), vbox);

																						    // Show all the widgets
																							    gtk_widget_show_all(window);

																								    // Run the main GTK loop
																									    gtk_main();

																										    return 0;
																											}
																										#include <gtk/gtk.h>

																										// Function to perform addition
																										static void add(GtkWidget *widget, gpointer data)
																										{
																										    g_print("Performing addition\n");
																											    // Perform addition operation here
																												}

																												// Function to perform subtraction
																												static void subtract(GtkWidget *widget, gpointer data)
																												{
																												    g_print("Performing subtraction\n");
																													    // Perform subtraction operation here
																														}

																														int main(int argc, char *argv[])
																														{
																														    gtk_init(&argc, &argv);

																															    // Create the main window
																																    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
																																	    gtk_window_set_title(GTK_WINDOW(window), "Simple Calculator");
																																		    gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);
																																			    gtk_container_set_border_width(GTK_CONTAINER(window), 10);

																																				    // Create buttons for addition and subtraction
																																					    GtkWidget *addButton = gtk_button_new_with_label("Add");
																																						    GtkWidget *subtractButton = gtk_button_new_with_label("Subtract");

																																							    // Connect button signals to their respective functions
																																								    g_signal_connect(addButton, "clicked", G_CALLBACK(add), NULL);
																																									    g_signal_connect(subtractButton, "clicked", G_CALLBACK(subtract), NULL);

																																										    // Create a vertical box to hold the buttons
																																											    GtkWidget *vbox = gtk_vbox_new(TRUE, 5);
																																												    gtk_box_pack_start(GTK_BOX(vbox), addButton, TRUE, TRUE, 0);
																																													    gtk_box_pack_start(GTK_BOX(vbox), subtractButton, TRUE, TRUE, 0);

																																														    // Add the vertical box to the main window
																																															    gtk_container_add(GTK_CONTAINER(window), vbox);

																																																    // Show all the widgets
																																																	    gtk_widget_show_all(window);

																																																		    // Run the main GTK loop
																																																			    gtk_main();

																																																				    return 0;
																																																					}
																																																				

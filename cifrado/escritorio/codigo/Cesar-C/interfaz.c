#include <gtk/gtk.h>
#include <string.h>
#include "alrevez.h"
#include "alrv3.h"
#include "cesar.h"

GtkWidget *mensaje,*desplazamiento,*rCesar,*rAlrevez,*ralrv3;
static void imprime(){
  //char* algo;
  char *algo=gtk_entry_get_text(GTK_ENTRY(mensaje));

  char resultado1[strlen(algo)],resultado2[strlen(algo)],resultado3[strlen(algo)];
  int i;
  for(i=0;i<strlen(algo);i++){
    resultado1[i]=*(algo+i);
    resultado2[i]=*(algo+i);
    resultado3[i]=*(algo+i);
  }
  resultado1[i]='\0';
  resultado2[i]='\0';
  resultado3[i]='\0';
  alrevez(resultado2);
  alrv(resultado3);
  //sscanf("%s", );
  char *desplazo=gtk_entry_get_text(GTK_ENTRY(desplazamiento));
  if(strlen(desplazo)>0){
    int valorDesplazamiento;
    sscanf(desplazo,"%i",&valorDesplazamiento);
    cesar(resultado1,valorDesplazamiento);
    gtk_entry_set_text(GTK_ENTRY(rCesar),resultado1);
  }
  gtk_entry_set_text(GTK_ENTRY(rAlrevez),resultado2);
  gtk_entry_set_text(GTK_ENTRY(ralrv3),resultado3);
}
static void
activate (GtkApplication *app,
          gpointer        user_data)
{
  GtkWidget *window,*etiquetas[5],*cesar,*grid[4],*frame[3];

  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "Cifrados");
  //gtk_window_set_default_size (GTK_WINDOW (window), 400, 400);

  grid[0]=gtk_grid_new();

  etiquetas[0]=gtk_label_new("Mensaje");
  gtk_grid_attach(GTK_GRID(grid[0]),etiquetas[0],2,0,1,1);
  mensaje=gtk_entry_new();
  gtk_grid_attach(GTK_GRID(grid[0]),mensaje,3,0,1,1);
  g_signal_connect (mensaje, "key_release_event",
                  G_CALLBACK (imprime), NULL);

  //primer frame
  frame[0]=gtk_frame_new("cesar");
  grid[1]=gtk_grid_new();
  gtk_container_add(GTK_CONTAINER(frame[0]),grid[1]);
  etiquetas[1]=gtk_label_new("Desplazamiento");
  gtk_grid_attach(GTK_GRID(grid[1]),etiquetas[1],0,0,1,1);
  desplazamiento=gtk_entry_new();
  gtk_grid_attach(GTK_GRID(grid[1]),desplazamiento,0,1,1,1);
  etiquetas[2]=gtk_label_new("Resultado");
  gtk_grid_attach(GTK_GRID(grid[1]),etiquetas[2],0,2,1,1);
  rCesar=gtk_entry_new();
  gtk_grid_attach(GTK_GRID(grid[1]),rCesar,0,3,1,1);

  //segundo frame
  frame[1]=gtk_frame_new("alrevez");
  grid[2]=gtk_grid_new();
  gtk_container_add(GTK_CONTAINER(frame[1]),grid[2]);
  etiquetas[3]=gtk_label_new("Resultado");
  gtk_grid_attach(GTK_GRID(grid[2]),etiquetas[3],0,0,1,1);
  rAlrevez=gtk_entry_new();
  gtk_grid_attach(GTK_GRID(grid[2]),rAlrevez,0,1,1,1);

  //tercer frame
  frame[2]=gtk_frame_new("alrevez3");
  grid[3]=gtk_grid_new();
  gtk_container_add(GTK_CONTAINER(frame[2]),grid[3]);
  etiquetas[4]=gtk_label_new("Resultado");
  gtk_grid_attach(GTK_GRID(grid[3]),etiquetas[4],0,0,1,1);
  ralrv3=gtk_entry_new();
  gtk_grid_attach(GTK_GRID(grid[3]),ralrv3,0,1,1,1);

  //agregando frames
  gtk_grid_attach(GTK_GRID(grid[0]),frame[0],0,1,2,3);
  gtk_grid_attach(GTK_GRID(grid[0]),frame[1],2,1,2,2);
  gtk_grid_attach(GTK_GRID(grid[0]),frame[2],4,1,2,2);

  gtk_container_add(GTK_CONTAINER(window),grid[0]);
  gtk_widget_show_all (window);
}

int
main (int    argc,
      char **argv)
{
  GtkApplication *app;
  int status;

  app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}

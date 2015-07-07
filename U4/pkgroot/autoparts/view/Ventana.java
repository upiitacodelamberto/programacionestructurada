package autoparts.view;

import java.awt.*;
import javax.swing.*;
import java.awt.event.*;//PASO 1/5

/**
 *
 * @author Grupo 1TM1 UA:Programacion Estructurada, Marzo julio de 2015
 * @version 2015.06.17
 */
public class Ventana implements ActionListener {//PASO 2/5

    Frame F;
    MenuBar MB;
    Menu Mecanica, Electrica, Electronica, Hidraulica;
    Menu Ergonomia, Aerodinamica, Ecologia, Dinamica;
    Menu Termodinamica;
    MenuItem Mecanica1, Mecanica2, Mecanica3;

    public Ventana() {
        F = new JFrame("Proyecto final Programacion "
                + "Estructurada (Marzo-Julio 2015)");
        F.setMenuBar(MB = new MenuBar());
        MB.add(Mecanica = new Menu("Mecanica"));
        MB.add(Electrica = new Menu("Electrica"));
        MB.add(Electronica = new Menu("Electronica"));
        MB.add(Hidraulica = new Menu("Hidraulica"));
        MB.add(Ergonomia = new Menu("Ergonomia"));
        MB.add(Aerodinamica = new Menu("Aerodinamica"));
        MB.add(Ecologia = new Menu("Ecologia"));
        MB.add(Dinamica = new Menu("Dinamica"));
        MB.add(Termodinamica = new Menu("Termodinamica"));
        Mecanica.add(Mecanica1 = new MenuItem("Mecanica1"));
        Mecanica.add(Mecanica2 = new MenuItem("Mecanica2"));
        Mecanica.add(Mecanica3 = new MenuItem("Mecanica3"));
        
        F.addWindowListener(new WindowAdapter() {

            public void windowClosing(WindowEvent we) {
                F.dispose();
                System.exit(0);
            }
        });
        
        F.setSize(800, 600);
        F.setLocationRelativeTo(null);
        F.setVisible(true);
    }//End Ventana()

    @Override
    public void actionPerformed(ActionEvent ae) {
        throw new UnsupportedOperationException("Not supported yet.");
    }
    public static void main(String[] args) {
        new Ventana();
    }
}

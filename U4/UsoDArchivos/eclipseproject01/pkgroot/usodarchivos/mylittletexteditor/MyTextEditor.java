package usodarchivos.mylittletexteditor;

import java.awt.Dimension;
import java.awt.Frame;
import java.awt.Menu;
import java.awt.MenuBar;
import java.awt.MenuItem;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

import javax.swing.JOptionPane;

public class MyTextEditor {
	Frame F;
	MenuBar MB;
	Menu M;
	MenuItem MI;
	Dimension D;
	public MyTextEditor(){
		F=new Frame("MyTextEditor");
		F.setMenuBar(MB=new MenuBar());
		MB.add(M=new Menu("Archivo"));
		M.add(MI=new MenuItem("Abrir"));
		
		F.addWindowListener(new WindowAdapter() {
			public void windowClosing(WindowEvent we){
				int confirm=JOptionPane.showConfirmDialog(null, "MyTextEditor se va a cerrar. "
						+ "Desea guardar los cambios en el archivo?");
				F.dispose();
			}
		});
		D=new Dimension(800, 600);
		F.setSize(D);
		F.setLocationRelativeTo(null);
		F.setVisible(true);
	}
	public static void main(String[] args) {
		new MyTextEditor();
	}

}

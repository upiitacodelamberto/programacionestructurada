package usodarchivos.mylittletexteditor;

import java.awt.Dimension;
import java.awt.Frame;
import java.awt.Menu;
import java.awt.MenuBar;
import java.awt.MenuItem;
import java.awt.event.ActionListener;//PASO 1/5
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.awt.event.ActionEvent;//PASO 1/5

import javax.swing.JOptionPane;

public class MyTextEditor implements ActionListener{//PASO 2/5
	Frame F;
	MenuBar MB;
	Menu M;
	MenuItem MIN;	/* MenuItem Nuevo */
	MenuItem MIA;	/* MenuItem Abrir */
	MenuItem MIC;	/* MenuItem Cerrar */
	Dimension D;
	
	public native void crearArchivo();
	//public native void sobrescribir(String S);
	static{
		System.loadLibrary("BDArchivos");
	}
	public MyTextEditor(){
		F=new Frame("MyTextEditor");
		F.setMenuBar(MB=new MenuBar());
		MB.add(M=new Menu("Archivo"));
		M.add(MIN=new MenuItem("Nuevo Archivo"));/* a MIN le tenemos que asignar un escucha */
		M.add(MIA=new MenuItem("Abrir Archivo"));
		M.add(MIC=new MenuItem("Cerrar Archivo"));
		
		MIN.addActionListener(this);//PASO 3/5
		F.addWindowListener(new WindowAdapter() {
			public void windowClosing(WindowEvent we){
				int confirm=JOptionPane.showConfirmDialog(null, "MyTextEditor se va a cerrar. "
						+ "Desea guardar los cambios en el archivo?");/* Si=0, No=1, Cancelar=2*/
				//System.out.println("confirm="+confirm);
				switch(confirm){
				case 0:{/* aqui, llamar a sobrescribir pasando el string que tenemos en el TextArea */
					
				}
				case 1:{
					
				}
				case 2:{
					
				}
				}
				F.dispose();
			}
		});
		D=new Dimension(800, 600);
		F.setSize(D);
		F.setLocationRelativeTo(null);
		F.setVisible(true);
	}
	public void actionPerformed(ActionEvent ae){//PASO 4/5
		MyTextEditor MTE=new MyTextEditor();
		if(ae.getActionCommand().equals("Nuevo Archivo")){
			MTE.crearArchivo();
		}
	}
	public static void main(String[] args) {
		new MyTextEditor();
	}

}

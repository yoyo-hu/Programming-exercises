//package txtReader;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.*;
import javax.swing.*;

public class Display_txt extends JFrame {
	
	JFrame jframe = new JFrame();
	JTextArea content;
	boolean flag = true;
	String str_filePath = null;
	
	public Display_txt(){
		//输入框
		content = new JTextArea(10,30);
		content.setAutoscrolls(true);
		// Text is not writable but readable only
		content.setEditable(false);
		//Text can be wrapped automatically
		content.setLineWrap(true);
		// Only vertical scroll bar, no horizontal scroll bar
		JScrollPane contentScroll = new JScrollPane(content,ScrollPaneConstants.VERTICAL_SCROLLBAR_ALWAYS,
                ScrollPaneConstants.HORIZONTAL_SCROLLBAR_NEVER);
		content.setBorder(BorderFactory.createBevelBorder(1));
		JPanel upper = new JPanel(new BorderLayout());
		upper.add(contentScroll);
		//按钮
		JButton filePath = new JButton("open file");
		filePath.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e){
				try{
					JFileChooser jfc = new JFileChooser();
					if(jfc.showOpenDialog(jframe)==JFileChooser.APPROVE_OPTION ){
						str_filePath = jfc.getSelectedFile().getAbsolutePath();
					}
					BufferedReader bufferedReader = new BufferedReader(new FileReader(str_filePath));
					String str_line;
					while((str_line=bufferedReader.readLine())!=null){
						if(flag){
							content.setText(str_line);
							flag = false;
						}
						else{
							content.setText(content.getText()+"\n"+str_line);
						}
					}
					bufferedReader.close();
				}catch(FileNotFoundException e1){
					e1.printStackTrace();
				}catch(IOException e2){
					e2.printStackTrace();
				}
			}
		});
		JPanel buttonp = new JPanel();
		buttonp.add(filePath);
		JPanel all = new JPanel(new GridLayout(1,1));
		all.add(upper);
		jframe.add(buttonp,BorderLayout.SOUTH);
		jframe.add(all,BorderLayout.CENTER);
		jframe.pack();
		Toolkit tool = Toolkit.getDefaultToolkit();
		Dimension screen = tool.getScreenSize();
		//The initial size of the window is (800,600)
		jframe.setBounds(screen.width/2-400,screen.height/2-300, 800, 600);
		jframe.setTitle("SimpleTxTReader");
		jframe.setVisible(true);
		jframe.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	
	public static void main(String args[]){
		Display_txt display_demo = new Display_txt();
	}
 
}
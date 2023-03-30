
package prototipo_escapetorussia;

import javax.swing.JOptionPane;


public class Carro {
    
    public boolean Usar(GalaoDeGasolina Galao){
        boolean retorno = false;
        
        if (Galao.isPossui()){
            if (Galao.isCheio()){
            JOptionPane.showMessageDialog(null,"Eu enchei o tanque de gasolina do carro!");
            retorno = true;
        }
        else if (!Galao.isCheio()){
            JOptionPane.showMessageDialog(null,"Eu preciso encher o galão de gasolina antes de encher o carro!");
            retorno = false;
        }
        }
        else if(!Galao.isPossui()){
            JOptionPane.showMessageDialog(null,"Eu preciso de um galão de gasolina para echer o carro!");
            retorno = false;
        }
        return retorno;
    }
}

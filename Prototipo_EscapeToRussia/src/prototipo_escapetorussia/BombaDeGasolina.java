
package prototipo_escapetorussia;

import javax.swing.JOptionPane;


public class BombaDeGasolina {
    
    public GalaoDeGasolina Usar(GalaoDeGasolina Galao){   
        
        if(Galao.isPossui()){
            if (Galao.isCheio()){
            JOptionPane.showMessageDialog(null,"O galão já está cheio!");
        }
        else if (!Galao.isCheio()){
          JOptionPane.showMessageDialog(null,"Eu enchi o galão de gasolina!");
          Galao.setCheio(true);
        }
        }
        else if (!Galao.isPossui()){
            JOptionPane.showMessageDialog(null,"Eu preciso de um galão de gasolina para pegar a gasolina da bomba!");
        }
        return Galao;
    }
}

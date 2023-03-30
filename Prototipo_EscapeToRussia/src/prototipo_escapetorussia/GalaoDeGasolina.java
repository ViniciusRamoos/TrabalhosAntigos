
package prototipo_escapetorussia;


public class GalaoDeGasolina {
    
    private boolean cheio;
    private boolean possui;

    public boolean isPossui() {
        return possui;
    }

    public void setPossui(boolean possui) {
        this.possui = possui;
    }
    
    public boolean isCheio() {
        return cheio;
    }

    public void setCheio(boolean cheio) {
        this.cheio = cheio;
    }

    public GalaoDeGasolina(boolean cheio, boolean possui) {
        this.cheio = cheio;
        this.possui = possui;
    }
    
    

}

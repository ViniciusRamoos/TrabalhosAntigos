
package prototipo_escapetorussia;

public class Prototipo_EscapeToRussia {

    
    public static void main(String[] args) {
        GalaoDeGasolina galao = new GalaoDeGasolina(false,false);
        BombaDeGasolina bomba = new BombaDeGasolina();
        Carro carro = new Carro();
        boolean verificar = false;
        
        verificar = carro.Usar(galao);
        galao = bomba.Usar(galao);
        galao.setPossui(true);
        verificar = carro.Usar(galao);
        galao = bomba.Usar(galao);
        galao = bomba.Usar(galao);
        verificar = carro.Usar(galao);
        
        if (verificar){
            
            System.exit(0);
        }
        
        Registrar registro = new Registrar();
        dadosjogador dados = new dadosjogador();
        
        dados.setNome("Teste");
        dados.setIdade(15);
        
        registro.incluir(dados);
    }
    
}

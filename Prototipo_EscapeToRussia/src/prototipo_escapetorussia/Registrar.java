
package prototipo_escapetorussia;

import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import javax.swing.JOptionPane;


public class Registrar {
    
    public boolean incluir(dadosjogador dados) {
        
        try{
            
            Statement stmt = ConexaoBanco.Conectar();
            
            String sql = "insert into dadosjogador set "
                    + "nome = '" + dados.getNome() + "'"
                    + ", idade = " + dados.getIdade();
            
            stmt.execute(sql, Statement.RETURN_GENERATED_KEYS);
            
            ResultSet retornoBanco = stmt.getGeneratedKeys();
            retornoBanco.next();
            JOptionPane.showMessageDialog(null, 
                    "Novo registro: " + retornoBanco.getInt(1));
            
            stmt.close();
            
            return true;
        }
        catch(SQLException ex){
            JOptionPane.showMessageDialog(null,
                    "Erro de execução: " + ex.getMessage());
            return false;
        }
    }
}


package prototipo_escapetorussia;

import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;


public class ConexaoBanco {
    
    public static java.sql.Connection conexao = null;
    
    public static Statement Conectar(){
        
        try{
            conexao = DriverManager.getConnection(
                "jdbc:mysql://localhost/registroescape"
                ,"root" 
                ,""); 
            
           Statement stmt = (Statement)conexao.createStatement();
        
           return stmt;
        } 
        catch(SQLException ex){
            throw new RuntimeException(ex);
        }  
    } 
}

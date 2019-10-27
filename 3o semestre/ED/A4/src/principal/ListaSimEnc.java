package principal;
import java.util.Iterator;
import net.datastructures.*;

/**
 *
 * @author Dinak
 */
public class ListaSimEnc {

    public static void main(String[] args) {
        System.out.println("Lista simplesmente encadeada de strings.");
        SinglyLinkedList<String> lista = new SinglyLinkedList<>();
        lista.addLast("Alice");
        lista.addLast("Beto");
        lista.addLast("Carlos");
        lista.addFirst("Zeno");
        System.out.println( "Tamanho: " + lista.size() );
        Node<String> j;

        j = (Node<String>) lista.first();
        while(j!=null) { // lista os elementos
            System.out.print(j.getElement() + " ");
            j = j.getNext();
        }

        System.out.println("");
        System.out.println( lista.removeFirst() );

        j = (Node<String>) lista.first();
        while(j!=null) { // lista os elementos
            System.out.print(j.getElement() + " ");
            j = j.getNext();
        }

        System.out.println("");
//        System.out.println( lista.removeFirst() );
//        System.out.println( lista.removeFirst() );
//        System.out.println( lista.removeFirst() );
//        System.out.println( lista.removeFirst() ); // erro

        for(long i=0; i<30_000_000L; i++) // adiciona mais de 60 milhões de elementos
            lista.addLast("stuff");

        System.out.println("Tamanho: " + lista.size());
        try { Thread.currentThread().sleep(1000); } catch (InterruptedException ex) {}
    }
    
}

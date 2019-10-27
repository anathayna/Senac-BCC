package net.datastructures;

/**
 *
 * @author Dinak
 */
public class SinglyLinkedList<E> {
    protected Node<E> head;
    protected Node<E> tail;
    protected long size;
    
    public SinglyLinkedList(){
        head = null;
        tail = null;
        size = 0;
    }
    
    public long    size()   {
        return size;
    }
    public boolean isEmpty(){ return size == 0; /*booleano*/ }
    public Node<E> first()  { return head; }
    public Node<E> last()   { return tail; }
    
    public void addFirst(E v){
        Node<E> no = new Node(); //nó
        no.setElement(v);
        no.setNext(head);
        head = no;
        size++;
        
        if(tail == null)
            tail = head;
    }

    public void addLast(E v){
        Node<E> no = new Node();
        no.setElement(v);
        no.setNext(null);        
        
        if(tail != null)
            tail.setNext(no);
            
        tail = no;
        size++;
        
        if(head == null)
            head = tail;
    }

    public E removeFirst(){
        if(this.isEmpty())
            throw new IllegalArgumentException("Error!");
        
        E temp = head.getElement();
        
        head = head.getNext();
        size--;
        
        if(this.isEmpty())
            tail = null;
        
        return temp;        
    }

}

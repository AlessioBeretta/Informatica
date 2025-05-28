## File Binari:

- FILE * nome = fopen("nome file", "modalità in cui puoi aprire il file)
    - r apre un file in lettura.

    - r+ apre un file in lettura/scrittura; il file deve esistere.

    - w crea un nuovo file in scrittura; se il file esiste viene cancellato il contenuto.

    - w+ crea un nuovo file in lettura/scrittura; se il file esiste viene cancellato il contenuto

    - a aggiunge (append) alla fine del file; se il file non esiste viene creato.

    - a+ aggiunge e legge a partire dalla fine del file; se il file non esiste viene creato.

- fwrite =(variabile, sizeof(Record), numero di volte, puntatore file)
- fread = (variabile, sizeof(Record), numero di volte, puntatore file)
- fseek = (puntatore file, long distanza, int partenza)
    - SEEK_SET – inizio del file

    - SEEK_END – fine del file

    - SEEK_CUR – posizione corrente dell’indicatore

- fclose = (puntatore file)
- ftell = (puntatore file)

## File di testo:

Un file di testo contiene dati leggibili da un editor, dove ogni carattere è rappresentato da una sequenza di byte secondo una codifica.
```
int c;
while ((c = fgetc(file)) != EOF) {
    putchar(c);
}
```
Questo codice dice che finchè il carattere che viene preso dal fgetc è diverso dall'EOF, inserisce il carattere nel file. <br>
E' consigliato usare l'EOF al posto dell'FEOF perchè è piu sicuro e c'è un controllo migliore per quanto riguarda l'ultimo carattere.
## OOP - Object Oriented Progamming
```
class Nome {
    Attributi:
        - Protected (per sottoclassi), Private (solo usabile nella classe), public (chiunque)
    Metodi:
        Costruttore:
             es. Lista() {
             s = nullptr;
            }
        Get: return variabile 
         Set: attributo = variabile;
}
```


- Overloading:
<br>
    Permette di scrivere un metodo con lo stesso nome ma con la firma diversa:
    ```
    public int sum(int x, int y) { return (x + y); } <br>
    public double sum(double x, double y) {return (x+y)}
    ```

- Override:
<br>
    L'Override si usa quando una classe derivata ridefinisce un metodo virtuale della classe base. Si usa la parola chiave override per chiarezza e sicurezza.
    ```
     virtual void parla() {
        cout << "L'animale fa un suono" << endl;
    }
    void parla() override {  // override del metodo parla
        cout << "Il cane abbaia" << endl;
        }
    };
    ```

- Sottoclassi:
    Una sottoclasse (o classe derivata) è una classe che eredita da un'altra classe (detta classe base). La sottoclasse può riutilizzare, estendere o modificare il comportamento della classe base.
    ```
    class Derivata : public Base
    ```

## Liste concatenate:

Una lista concatenata (linked list) è una struttura dati composta da nodi, dove ogni nodo contiene:

Un dato (es. un numero)

Un puntatore al nodo successivo

A differenza degli array, le liste concatenate non usano memoria contigua e permettono inserimenti/cancellazioni efficienti.

```
struct Nodo {
	int info; 
	Nodo* next;
};
```

```
#include <iostream>
#include <ctime>


using namespace std;

struct Nodo {
	int info; 
	Nodo* next;
};typedef struct Nodo nodo;
class Lista {
	private:
		nodo* s;
	public:
		Lista() {
			s = NULL;
		}
		nodo * insertTesta() {	// Inserimento in testa 
			nodo *p;
			p = new Nodo;
			p->info = rand() % 101;
			p->next = s;
			s = p;
			return p;
		}
		void stampaLista() {	// Stampa lista
			nodo *q;
			q = s;
			while(q != NULL) {
			cout << q->info << " ";
			q = q->next;
			}
			cout << endl;
		}
		void insertUltimo() {	// Inserisci ultimo elemento nella lista 
			Nodo *p = new Nodo;
			p -> info = rand() % 101;
			p-> next = NULL;
			if(s == NULL) {
				s = p;
			}
			else {
				nodo *q = s;
				while( q->next != NULL) {
					q = q->next;
				}
			q -> next = p;
			}
		}
		int getElemento() {  // Restituisce l'elemento
			return s->info;
		}
		void setElemento(int x) { // Setto il valore dell'elemento
			s->info = x;
		}
		int cancellaNodo() { // Cancellazione in testa del nodo
			if (s == NULL) {
				return 1; 
			}
			else {
				nodo *p;
				p = s;
				s = s ->next;
				delete(p);
			}
			return 0;
		} 
		int cancellaUltimo() { // Cancellazione dell'ultimo nodo
			if(s == NULL) { 		// Se la lista è vuota 
				return 1;
			}
			if(s->next== NULL) { 		// Se la lista ha solo un nodo, cancello il primo 
				return cancellaNodo();
			}
			else { 
				nodo *q,*p;
				q = s;
				while(q->next != NULL) { // Scorro il nodo fino all'ultimo nodo
					p = q;
					q = q->next;
				}
				delete (q);
				p->next=NULL;
				
			}
			return 0;
		}
		int ricercaNodo(int valore) { // Ricerca di un nodo
			nodo *q;
			q = s;
			while(q != NULL) {
				if(q->info == valore) { // Se il nodo è uguale al valore cercato
					return 1;
				}
				q = q->next;
			}
			return 0;
		}
		int contaNodo() { // Conta il numero dei nodi
			nodo *q;
			int cont = 0;
			q = s;
			while(q != NULL) {
				cont++;
				q = q->next;
			}
			return cont;
		}
		void eliminaDuplicati() { // Elimina i duplicati
			nodo *q,*p,*r;
			q = s;
			while(q->next != NULL) { // Scorro la lista
				p = q;
				r = q->next;
				while(r != NULL) { 
					if(q->info == r->info) { // Se il nodo è uguale al nodo successivo, lo elimino
						p->next = r->next; 
						delete(r);
						r = p->next;
					}
					else { // Altrimenti scorro la lista
						p = r;
						r = r->next;
					}
				}
				q = q->next;
			}
		}
		void ordinaLista() { // Ordina lista con metodo BubbleSort
			nodo *q, *p;
			int temp, scambi = 0;;
			if(s == NULL) { // Se la lista è vuota
				return;
			}
			do { 
				scambi = 0;
				q = s;
			while(q->next != NULL) { // Scorro la lista
				p = q->next;
				if(q->info > p->info) { // Ordino la lista
					temp = q->info;
					q->info = p->info;
					p->info = temp;
					scambi = 1;
				}
				q = q->next;
			}
		}
		while(scambi == 1); // Continuo finche non ci sono piu scambi
	}
}; 
	int main () {
	srand(time(0));
	Lista L1;
	for(int i = 0; i<4; i++) {
		L1.insertTesta();
	}
	L1.stampaLista();
	cout << endl;
	L1.ordinaLista();
	L1.stampaLista();
}
```
/* Beretta Alessio
	Manipolazione della pila
*/


#include <iostream>
#include <ctime>


using namespace std;

struct Nodo {
	int info; 
	Nodo* next;
};typedef struct Nodo nodo;
class Pila {
	private:
		nodo* s;
	public:
		Pila() {
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
		void stampaPila() {	// Stampa Pila
			nodo *q;
			q = s;
			while(q != NULL) {
			cout << q->info << " ";
			q = q->next;
            cout << endl;
			}
		}
		int getElemento() {  
			return s->info;
		}
		void setElemento(int x) {
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
}; 

int main () {
    srand(time(NULL));
    Pila P1;
    for(int i = 0; i < 4; i++) {
        P1.insertTesta();
    }
    P1.stampaPila();
    if(P1.cancellaNodo()) {
        cout << "Pila vuota" << endl;
    }
    else {
        cout << "Pila con nodo cancellato:" << endl;
    }
    P1.stampaPila();
}
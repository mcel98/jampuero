#include "Lista.h"

template <typename T>
Lista<T>::Lista() :  _prim(NULL), _ult(NULL) {
    // Completar
}

// Inicializa una lista vacía y luego utiliza operator= para no duplicar el
// código de la copia de una lista.
template <typename T>
Lista<T>::Lista(const Lista<T>& l) : Lista() { *this = l; } 

template <typename T>

Lista<T>::~Lista() {
    int size = longitud();
    assert(size==0);

        punteroNodo borrar = _prim;
        if(_prim==_ult){
            _ult=NULL;
        }else{
            _prim-> siguiente -> anterior = NULL;
            _prim = _prim ->siguiente;
            delete borrar;
            size--;
        }
    }
    // Completar

template <typename T>
Lista<T>& Lista<T>::operator=(const Lista<T>& l) {
    // Completar
}

template <typename T>
void Lista<T>::agregarAdelante(const T& elem) {
    int size = longitud();
    punteroNodo nuevo = new Nodo (elem);
    if(size==0){
        _prim = _ult;
        _ult = nuevo;
    } else {
      _prim -> anterior = nuevo;
        nuevo -> siguiente = _prim;
        _prim = nuevo;
    }
    size++;
    // Completar
}

template <typename T>
void Lista<T>::agregarAtras(const T& elem) {
    int size = longitud();
    punteroNodo nuevo = new Nodo (elem);
    if(size==0){
        _prim = _ult;
        _ult = nuevo;
    } else {
    _ult -> siguiente = nuevo;
    nuevo -> anterior = _ult;
    _ult = nuevo;
    }
    size++;
    // Completar
}

template <typename T>
int Lista<T>::longitud() const {
    int tam = 0;
    if(_prim == NULL and _ult == NULL){
        return tam;
    } else {
        while(_prim -> siguiente != NULL and _ult -> anterior != NULL){
            tam++;
        }
        return tam;
    }
    // Completar
}

template <typename T>
const T& Lista<T>::iesimo(Nat i) const {
    punteroNodo iterador = _prim;
    for(int j = 0; j <= i; j++){
        if(iterador ->siguiente !=NULL) {
            iterador = iterador->siguiente;
        }
    }

    return iterador;// Completar
}

template <typename T>
void Lista<T>::eliminar(Nat i) {
    // Completar
}

template <typename T>
T& Lista<T>::iesimo(Nat i) {
    // Completar (hint: es igual a la anterior...)
}

template <typename T>
void Lista<T>::mostrar(std::ostream& o) {
	// Completar
}

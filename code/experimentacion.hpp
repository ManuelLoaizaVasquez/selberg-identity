#ifndef EXPERIMENTACION_HPP
#define EXPERIMENTACION_HPP

#include <vector>
#include <tuple>

/**
 * ObtenerPrimos - Retorna un vector que contiene todos los
 * numeros primos menores o iguales a un numero dado.
 * 
 * @param x: Numero limite para buscar los numeros primos.
 * @return: Un vector que contiene todos los numeros primos
 * encontrados.
 */
std::vector<long long> ObtenerPrimos(const long long x);

/**
 * ObtenerMaximoPrimo - Retorna el maximo numero primo `q'
 * tal que `pq' sea menor o igual a un numero dado `x'.
 * 
 * @param p: Numero limite inferior para el numero primo a
 * buscar.
 * @param x: Numero limite para el producto de primos.
 * @param P: Vector que contiene los numeros primos ordenados
 * de menor a mayor.
 * @return: El maximo numero primo encontrado que cumple las
 * condiciones, o -1 si no se encuentra ninguno.
 */
long long ObtenerMaximoPrimo(
    const long long p,
    const long long x,
    const std::vector<long long>& P
);

/**
 * Sumar1 - Retorna una tupla que contiene un valor `s' con
 * la suma de los cuadrados de los logaritmos de primos y un
 * vector `L' con las sumas parciales de los logaritmos de
 * primos.
 * 
 * @param x: Numero limite para realizar las operaciones.
 * @param P: Vector que contiene los numeros primos ordenados
 * de menor a mayor.
 * @return: Una tupla que contiene el valor `s' y el vector
 * `L' obtenidos.
 */
std::tuple<long double, std::vector<long double>> Sumar1(
    const long long x,
    const std::vector<long long>& P
);

/**
 * Sumar2 - Retorna la suma de los productos de los
 * logaritmos de primos `p' y `q' tales que  `pq' es menor
 * o igual a `x'.
 * 
 * @param x: Numero limite para realizar las operaciones.
 * @param L: Vector que contiene las sumas parciales de los
 * logaritmos de primos.
 * @param P: Vector que contiene los numeros primos.
 * @return: El resultado de la suma obtenida.
 */
long double Sumar2(
    const long long x,
    const std::vector<long double>& L,
    const std::vector<long long>& P
);

/**
 * K - Calcula y retorna el valor de la funcion K para un
 * numero dado `x'.
 * 
 * @param x: Numero para el cual se desea calcular el valor
 * de la funcion K.
 * @return: El valor de la funcion K para el numero dado `x'.
 */
long double K(const long long x);

#endif
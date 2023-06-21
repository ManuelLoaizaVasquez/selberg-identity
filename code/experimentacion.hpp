#ifndef EXPERIMENTACION_HPP
#define EXPERIMENTACION_HPP

#include <vector>
#include <tuple>

/**
 * ObtenerPrimos - Retorna un vector que contiene todos los números primos
 *                 menores o iguales a un número dado.
 * 
 * @param x: Número límite para buscar los números primos.
 * @return: Un vector que contiene todos los números primos encontrados.
 */
std::vector<long long> ObtenerPrimos(const long long x);

/**
 * ObtenerMaximoPrimo - Retorna el máximo número primo 'q' tal que 'pq' sea menor o igual a un número dado 'x'.
 * 
 * @param p: Número límite inferior para el número primo a buscar.
 * @param x: Número límite para el producto de primos.
 * @param P: Vector que contiene los números primos ordenados de menor a mayor.
 * @return: El máximo número primo encontrado que cumple las condiciones, o -1 si no se encuentra ninguno.
 */
long long ObtenerMaximoPrimo(const long long p, const long long x, const std::vector<long long>& P);

/**
 * Sumar1 - Retorna una tupla que contiene
 *          un valor 's' con la suma de los cuadrados de los logaritmos de primos
 *          y un vector 'L' con las sumas parciales de los logaritmos de primos.
 * @param x: Número límite para realizar las operaciones.
 * @param P: Vector que contiene los números primos ordenados de menor a mayor.
 * @return: Una tupla que contiene el valor 's' y el vector 'L' obtenidos.
 */
std::tuple<long double, std::vector<long double>> Sumar1(const long long x, const std::vector<long long>& P);

/**
 * Sumar2 - Retorna la suma de los productos de los logaritmos de primos 'p' y 'q'
 * tales que  'pq' es menor o igual a 'x'.
 * 
 * @param x: Número límite para realizar las operaciones.
 * @param L: Vector que contiene las sumas parciales de los logaritmos de primos.
 * @param P: Vector que contiene los números primos.
 * @return: El resultado de la suma obtenida.
 */
long double Sumar2(const long long x, const std::vector<long double>& L, const std::vector<long long>& P);

/**
 * K - Calcula y retorna el valor de la función K para un número dado 'x'.
 * 
 * @param x: Número para el cual se desea calcular el valor de la función K.
 * @return: El valor de la función K para el número dado 'x'.
 */
long double K(const long long x);

#endif
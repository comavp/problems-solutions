/*
Price of Mangoes
https://www.codewars.com/kata/57a77726bb9944d000000b06
*/

def mango(quantity, price):
    mangoes_for_free = quantity // 3
    return (quantity - mangoes_for_free) * price
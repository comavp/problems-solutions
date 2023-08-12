/*
Drink about
https://www.codewars.com/kata/56170e844da7c6f647000063
*/

def people_with_age_drink(age):
    result = 'drink '
    if age < 14:
        return result + 'toddy'
    elif age < 18:
        return result + 'coke'
    elif age < 21:
        return result + 'beer'
    else:
        return result + 'whisky'
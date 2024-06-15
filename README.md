
Indica la licencia bajo la cual se distribuye el proyecto.
# Módulo 0 de C++ - README

- Pequeña introduccion a c++ donde aprenderemos la sintaxis basica y la inaciacion a clases simples


## ex00

- Aqui aprenderemos a usar las librerias de `<iostream>`

- Siempre usaremos std:: delante para declarar variables como para usar ciertas declaraciones

- aqui aprendemos a usar cout que es lo que saldra por la terminal
y funciones que nos sirven para manipular strings gracias a los metodos de la clase string

- al incluir `<iostream>` tambien tendremos acceso a `<string>`

### ejemplos de metodos de la clase string 
```c++
std::string str = "Hola, mundo!";
std::cout << str.length();  // Imprime 12
std::string str = "Hola, mundo!";
std::cout << str.substr(0, 4);  // Imprime "Hola"
std::string str = "Hola, mundo!";
std::cout << str.find("mundo");  // Imprime 6
std::string str = "Hola, mundo!";
str.replace(0, 4, "Adios");
std::cout << str;  // Imprime "Adios, mundo!"
std::string str = "Hola";
str.append(", mundo!");
std::cout << str;  // Imprime "Hola, mundo!"
std::string str = "Hola, mundo!";
str.insert(5, "querido ");
std::cout << str;  // Imprime "Hola, querido mundo!"
std::string str = "Hola, querido mundo!";
str.erase(5, 8);
std::cout << str;  // Imprime "Hola, mundo!"
std::string str1 = "Hola";
std::string str2 = "Adios";
if (str1.compare(str2) != 0) {
	std::cout << "Las cadenas son diferentes";
} else {
	std::cout << "Las cadenas son iguales";
}
std::string str = "Hola, mundo!";
const char* cstr = str.c_str();
std::cout << cstr;  // Imprime "Hola, mundo!"
std::string str1 = "Hola";
std::string str2 = "Adios";
str1.swap(str2);
std::cout << str1 << " " << str2;  // Imprime "Adios Hola"

```

## ex01

### Aprendiendo de clases

```c++
#include <string>

class Contact
{
public:
    Contact();
    void set_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_nickname() const;
    std::string get_phone_number() const;
    std::string get_darkest_secret() const;

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

#endif
```

- La clase se compone de variables y metodos publicos y privados
- Los publicos pueden ser llamados desde cualquier sitio y los privados desde la propia clase
- los metodos son funciones que podremos usar una vez inicializamos el objeto como si fuera una variable

```c++
Contact	new_contact;

new_contact.set_contact(first_name, last_name, nickname, phone_number,darkest_secret)
```
de esta forma inicializamos una clase Contact con el nombre de new_contact
y luego con el nombre con el que hemos inicializado y . podremos aceder a las variebles y metodos publicos de la clase.

```c++
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
public:
    PhoneBook();
    void add_contact();
    void display_contacts() ;

private:
    Contact contacts[MAX_CONTACTS];
    int contact_count;
    bool set_field(std::string field, std::string &value);
    void stylize(std::string str);
    bool is_valid_input(const std::string &value) const;
    
};

#endif
```
- De esta forma enlazamos dos clases con lo cual el listin telofonico va a tener un array de 8 contactos.

## la libreria iomanip

- En este ejercicio tambien aprendemos a maquetar la salida por terminal

```c++
std::cout << std::setw(10) << "Hola";  // Imprime "      Hola"
std::cout << std::setw(10) << std::setfill('*') << "Hola";  // Imprime "******Hola"
std::cout << std::setprecision(3) << 3.14159;  // Imprime "3.14"
std::cout << std::fixed << std::setprecision(2) << 3.14159;  // Imprime "3.14"
std::cout << std::scientific << std::setprecision(2) << 3.14159;  // Imprime "3.14e+00"
std::cout << std::setw(10) << std::left << "Hola";  // Imprime "Hola      "
std::cout << std::setw(10) << std::right << "Hola";  // Imprime "      Hola"

```

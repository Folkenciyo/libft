# Libft

Libft: Este proyecto consiste en codificar una biblioteca en C que agrupe funciones habituales que podrás utilizar en todos mis demás proyectos.

<p align="center">
    <img src="http://asidesigned.com/images/programming-projects-img/project-libft.jpg" height="250">
</p>

## Contenido

* Sobre el proyecto
* Cómo usar
  * Compilación
* Uso
* Funciones de la librería
  * Primera parte
  * Segunda parte
  * Bonus
* Autor

## Sobre el proyecto

Este proyecto de 42 consiste en crear una biblioteca en lenguaje C que agrupe una serie de funciones comunes que se pueden utilizar en otros proyectos. La biblioteca debe incluir la implementación de funciones en el archivo "01. functions.c" y también tiene una sección de bonificación. El proyecto también debe incluir un archivo Makefile para la compilación y un archivo de autor. Los recursos recomendados para este proyecto incluyen la referencia de C y GeeksforGeeks. El proyecto se puede ampliar agregando más funciones y contribuyendo mediante la creación de una solicitud de extracción en el repositorio.

## Cómo usar

### Compilación
Ejecuta los siguientes comandos:

* Para compilar
```bash
make
```
* Para eliminar objetos:
```bash
make clean
```
* Para eliminar objetos y archivos binarios (programa):
```bash
make fclean
```
* Para recompilar:
```bash
make re
```
Este comando generará un archivo libft.a, que es la biblioteca que contiene las funciones de libft.

## Uso

Uso en tu programa
Para utilizar la funciones de libft en tu programa, deberás incluir el archivo ft_printf.h en tu código. Luego, podrás llamar a la función ft_printf utilizando los mismos especificadores de formato que se utilizan en la función printf de la biblioteca estándar de C.

# Funciones de la librería libft incluidas: 
## Primera parte

| [ft_isalpha.c](https://github.com/Folkenciyo/libft/blob/master/ft_isalpha.c) | [ft_isdigit.c](https://github.com/Folkenciyo/libft/blob/master/ft_isdigit.c) | [ft_isalnum.c](https://github.com/Folkenciyo/libft/blob/master/ft_isalnum.c) |
|:-:|:-:|:-:|
[ft_isascii.c](https://github.com/Folkenciyo/libft/blob/master/ft_isascii.c) | [ft_isprint.c](https://github.com/Folkenciyo/libft/blob/master/ft_isprint.c) | [ft_strlen.c](https://github.com/Folkenciyo/libft/blob/master/ft_strlen.c) | 
[ft_memset.c](https://github.com/Folkenciyo/libft/blob/master/ft_memset.c) | [ft_bzero.c](https://github.com/Folkenciyo/libft/blob/master/ft_bzero.c) |  [ft_memcpy.c](https://github.com/Folkenciyo/libft/blob/master/ft_memcpy.c) |  
[ft_memmove.c](https://github.com/Folkenciyo/libft/blob/master/ft_memmove.c) | [ft_strlcpy.c](https://github.com/Folkenciyo/libft/blob/master/ft_strlcpy.c) | [ft_strlcat.c](https://github.com/Folkenciyo/libft/blob/master/ft_strlcat.c) | 
[ft_toupper.c](https://github.com/Folkenciyo/libft/blob/master/ft_toupper.c) |  [ft_tolower.c](https://github.com/Folkenciyo/libft/blob/master/ft_tolower.c) |  [ft_strchr.c](https://github.com/Folkenciyo/libft/blob/master/ft_strchr.c) | [ft_strrchr.c](https://github.com/Folkenciyo/libft/blob/master/ft_strrchr.c) |  [ft_strncmp.c](https://github.com/Folkenciyo/libft/blob/master/ft_strncmp.c) |  [ft_memchr.c](https://github.com/Folkenciyo/libft/blob/master/ft_memchr.c) | 
[ft_memcmp.c](https://github.com/Folkenciyo/libft/blob/master/ft_memcmp.c) |  [ft_strnstr.c](https://github.com/Folkenciyo/libft/blob/master/ft_strnstr.c) |  [ft_atoi.c](https://github.com/Folkenciyo/libft/blob/master/ft_atoi.c) | 
[ft_calloc.c](https://github.com/Folkenciyo/libft/blob/master/ft_calloc.c) |  [ft_strdup.c](https://github.com/Folkenciyo/libft/blob/master/ft_strdup.c) 

## Segunda parte

| [ft_substr.c](https://github.com/Folkenciyo/libft/blob/master/ft_substr.c) | [ft_strjoin.c](https://github.com/Folkenciyo/libft/blob/master/ft_strjoin.c) | [ft_strtrim.c](https://github.com/Folkenciyo/libft/blob/master/ft_strtrim.c) |
|:-:|:-:|:-:|
[ft_split.c](https://github.com/Folkenciyo/libft/blob/master/ft_split.c) | [ft_itoa.c](https://github.com/Folkenciyo/libft/blob/master/ft_itoa.c) | [ft_lstclear.c](https://github.com/Folkenciyo/libft/blob/master/ft_strchr.c) | 
[ft_striteri.c](https://github.com/Folkenciyo/libft/blob/master/ft_striteri.c) | [ft_putstr_fd.c](https://github.com/Folkenciyo/libft/blob/master/ft_putstr_fd.c) | [ft_putendl_fd.c](https://github.com/Folkenciyo/libft/blob/master/ft_putendl_fd.c) | 
[ft_putchar_fd.c](https://github.com/Folkenciyo/libft/blob/master/ft_putchar_fd.c) | [ft_putnbr_fd.c](https://github.com/Folkenciyo/libft/blob/master/ft_putnbr_fd.c) |

## Bonus

| [ft_lstnew.c](https://github.com/Folkenciyo/libft/blob/master/ft_lstnew.c)  | [ft_lstadd_front.c](https://github.com/Folkenciyo/libft/blob/master/ft_lstadd_front.c) |  [ft_lstsize.c](https://github.com/Folkenciyo/libft/blob/master/ft_lstsize.c) | 
|:-:|:-:|:-:|
[ft_listlast.c](https://github.com/Folkenciyo/libft/blob/master/ft_listlast.c) | [ft_lstdelone.c](https://github.com/Folkenciyo/libft/blob/master/ft_lstdelone.c) | [ft_lstclear.c](https://github.com/Folkenciyo/libft/blob/master/ft_lstclear.c) | 
[ft_lstiter.c](https://github.com/Folkenciyo/libft/blob/master/ft_lstiter.c) | [ft_lstmap_fd.c](https://github.com/Folkenciyo/libft/blob/master/ft_lstmap_fd.c) |

## Autor

* **Juan Guerrero** - *@juguerre - 42Málaga* - [Juan Guerrero](https://github.com/Folkenciyo/)

### ¿Puedes agregar más funciones a esta biblioteca? ¿Cómo?
* Haz un fork de este repositorio
* Clona tu fork del repositorio
* Contribuye
* Realiza un push
* Crea una solicitud de extracción (pull request) en este repositorio
* ¡Espera a que se fusionen los cambios!
 ¡Sé feliz! :)
---
## 🔗 Links
[![portfolio](https://img.shields.io/badge/portfolio-002?style=for-the-badge&logo=ko-fi&logoColor=white)](https://porfolio-juan-guerrero.vercel.app/)
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/juanguerrerodeveloper/)
[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://twitter.com/JuanAGuerreroP1)



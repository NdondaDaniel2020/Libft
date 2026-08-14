# Libft - @42

<p align="center">
  <img src="https://img.shields.io/github/license/NdondaDaniel2020/Libft?style=flat-for-the-badge" alt="License" />
  <img src="https://img.shields.io/github/languages/top/NdondaDaniel2020/Libft?style=flat-for-the-badge" alt="Top Language" />
  <img src="https://img.shields.io/github/repo-size/NdondaDaniel2020/Libft?style=flat-for-the-badge" alt="Repo Size" />
</p>

O **Libft** é o primeiro projeto do currículo da **Escola 42**. O objetivo deste projeto é recriar diversas funções da biblioteca padrão do C (`libc`), além de implementar outras funções utilitárias que serão úteis ao longo do curso.

Esta versão da biblioteca foi estendida para incluir implementações customizadas de projetos subsequentes da 42, como o `ft_printf` e o `get_next_line`.

---

## 📌 Índice

- [Funcionalidades](#-funcionalidades)
- [Estrutura do Projeto](#-estrutura-do-projeto)
- [Instruções de Compilação](#-instruções-de-compilação)
- [Como Utilizar](#-como-utilizar)
- [Licença](#-licença)

---

## 🛠️ Funcionalidades

As funções da biblioteca estão divididas nas seguintes categorias:

### 1. Funções da Libc (Parte 1)
Reimplementações de funções padrão do C.

* **Verificação de Caracteres:**
  * [ft_isalpha.c](file:///spot/NdDaniel/Code/42/Libft/ft_isalpha.c) — Verifica se é um caractere alfabético.
  * [ft_isdigit.c](file:///spot/NdDaniel/Code/42/Libft/ft_isdigit.c) — Verifica se é um dígito (0-9).
  * [ft_isalnum.c](file:///spot/NdDaniel/Code/42/Libft/ft_isalnum.c) — Verifica se é alfanumérico.
  * [ft_isascii.c](file:///spot/NdDaniel/Code/42/Libft/ft_isascii.c) — Verifica se pertence à tabela ASCII.
  * [ft_isprint.c](file:///spot/NdDaniel/Code/42/Libft/ft_isprint.c) — Verifica se é um caractere imprimível.

* **Manipulação de Caracteres e Strings:**
  * [ft_toupper.c](file:///spot/NdDaniel/Code/42/Libft/ft_toupper.c) — Converte caractere para maiúsculo.
  * [ft_tolower.c](file:///spot/NdDaniel/Code/42/Libft/ft_tolower.c) — Converte caractere para minúsculo.
  * [ft_strlen.c](file:///spot/NdDaniel/Code/42/Libft/ft_strlen.c) — Calcula o comprimento de uma string.
  * [ft_strchr.c](file:///spot/NdDaniel/Code/42/Libft/ft_strchr.c) — Localiza a primeira ocorrência de um caractere em uma string.
  * [ft_strrchr.c](file:///spot/NdDaniel/Code/42/Libft/ft_strrchr.c) — Localiza a última ocorrência de um caractere em uma string.
  * [ft_strncmp.c](file:///spot/NdDaniel/Code/42/Libft/ft_strncmp.c) — Compara duas strings até um limite de caracteres.
  * [ft_strnstr.c](file:///spot/NdDaniel/Code/42/Libft/ft_strnstr.c) — Localiza uma sub-string dentro de outra.
  * [ft_strlcpy.c](file:///spot/NdDaniel/Code/42/Libft/ft_strlcpy.c) — Copia strings de forma segura com limite de tamanho.
  * [ft_strlcat.c](file:///spot/NdDaniel/Code/42/Libft/ft_strlcat.c) — Concatena strings de forma segura com limite de tamanho.
  * [ft_atoi.c](file:///spot/NdDaniel/Code/42/Libft/ft_atoi.c) — Converte uma string em um número inteiro.

* **Manipulação de Memória:**
  * [ft_memset.c](file:///spot/NdDaniel/Code/42/Libft/ft_memset.c) — Preenche a memória com um byte constante.
  * [ft_bzero.c](file:///spot/NdDaniel/Code/42/Libft/ft_bzero.c) — Zera uma porção da memória.
  * [ft_memcpy.c](file:///spot/NdDaniel/Code/42/Libft/ft_memcpy.c) — Copia uma área de memória (sem sobreposição de buffers).
  * [ft_memmove.c](file:///spot/NdDaniel/Code/42/Libft/ft_memmove.c) — Copia uma área de memória (com suporte a sobreposição de buffers).
  * [ft_memchr.c](file:///spot/NdDaniel/Code/42/Libft/ft_memchr.c) — Localiza um caractere na memória.
  * [ft_memcmp.c](file:///spot/NdDaniel/Code/42/Libft/ft_memcmp.c) — Compara duas áreas de memória.

* **Alocação Dinâmica:**
  * [ft_calloc.c](file:///spot/NdDaniel/Code/42/Libft/ft_calloc.c) — Aloca memória inicializada em zero.
  * [ft_strdup.c](file:///spot/NdDaniel/Code/42/Libft/ft_strdup.c) — Duplica uma string alocando nova memória.

### 2. Funções Adicionais (Parte 2)
Funções utilitárias adicionais recomendadas pela especificação Libft ou modificadas.

* [ft_substr.c](file:///spot/NdDaniel/Code/42/Libft/ft_substr.c) — Extrai uma substring a partir de uma string.
* [ft_strjoin.c](file:///spot/NdDaniel/Code/42/Libft/ft_strjoin.c) — Concatena duas strings em uma nova string alocada.
* [ft_strtrim.c](file:///spot/NdDaniel/Code/42/Libft/ft_strtrim.c) — Remove caracteres específicos do início e fim de uma string.
* [ft_split.c](file:///spot/NdDaniel/Code/42/Libft/ft_split.c) — Divide uma string em várias substrings com base em um delimitador.
* [ft_itoa.c](file:///spot/NdDaniel/Code/42/Libft/ft_itoa.c) — Converte um número inteiro para uma string.
* [ft_strmapi.c](file:///spot/NdDaniel/Code/42/Libft/ft_strmapi.c) — Cria uma nova string aplicando uma função a cada caractere.
* [ft_striteri.c](file:///spot/NdDaniel/Code/42/Libft/ft_striteri.c) — Aplica uma função a cada caractere da string original por referência.
* [ft_putchar_fd.c](file:///spot/NdDaniel/Code/42/Libft/ft_putchar_fd.c) — Envia um caractere para um File Descriptor (fd) especificado.
* [ft_putstr_fd.c](file:///spot/NdDaniel/Code/42/Libft/ft_putstr_fd.c) — Envia uma string para um fd.
* [ft_putendl_fd.c](file:///spot/NdDaniel/Code/42/Libft/ft_putendl_fd.c) — Envia uma string seguida de uma quebra de linha para um fd.
* [ft_putnbr_fd.c](file:///spot/NdDaniel/Code/42/Libft/ft_putnbr_fd.c) — Envia um número inteiro para um fd.

### 3. Funções de Lista Ligada (Bônus)
Estrutura e manipulação de listas ligadas unidirecionais (`t_list`).

* [ft_lstnew.c](file:///spot/NdDaniel/Code/42/Libft/ft_lstnew.c) — Cria um novo elemento de lista.
* [ft_lstadd_front.c](file:///spot/NdDaniel/Code/42/Libft/ft_lstadd_front.c) — Adiciona um elemento no início da lista.
* [ft_lstsize.c](file:///spot/NdDaniel/Code/42/Libft/ft_lstsize.c) — Conta o número de elementos da lista.
* [ft_lstlast.c](file:///spot/NdDaniel/Code/42/Libft/ft_lstlast.c) — Retorna o último elemento da lista.
* [ft_lstadd_back.c](file:///spot/NdDaniel/Code/42/Libft/ft_lstadd_back.c) — Adiciona um elemento no fim da lista.
* [ft_lstdelone.c](file:///spot/NdDaniel/Code/42/Libft/ft_lstdelone.c) — Libera a memória de um elemento específico da lista usando uma função deletora.
* [ft_lstclear.c](file:///spot/NdDaniel/Code/42/Libft/ft_lstclear.c) — Limpa e deleta toda a lista ligada.
* [ft_lstiter.c](file:///spot/NdDaniel/Code/42/Libft/ft_lstiter.c) — Aplica uma função iteradora a todos os elementos da lista.
* [ft_lstmap.c](file:///spot/NdDaniel/Code/42/Libft/ft_lstmap.c) — Cria uma nova lista a partir do resultado da aplicação de uma função sobre cada elemento da lista original.

### 4. Extensões Adicionais Integradas
Esta biblioteca contém extensões integradas para utilidades de E/S e formatação de texto avançadas:

* **Get Next Line:**
  * [get_next_line.c](file:///spot/NdDaniel/Code/42/Libft/get_next_line.c) — Retorna a próxima linha lida a partir de um File Descriptor (fd), gerenciando buffer dinamicamente.
* **Ft Printf:**
  * [ft_printf.c](file:///spot/NdDaniel/Code/42/Libft/ft_printf.c) — Uma recriação simplificada da função padrão `printf`, com suporte para os especificadores `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X` e `%%`.
* **Outras Utilidades:**
  * [ft_findchar.c](file:///spot/NdDaniel/Code/42/Libft/ft_findchar.c) — Busca um caractere em uma string e retorna um valor de controle indicando a presença.
  * [ft_initstr.c](file:///spot/NdDaniel/Code/42/Libft/ft_initstr.c) — Inicializa ponteiros de strings de maneira segura.

---

## 📁 Estrutura do Projeto

* Todos os arquivos de código-fonte (`.c`) estão na raiz do repositório.
* A definição dos protótipos de funções e da estrutura `t_list` está no arquivo de cabeçalho [libft.h](file:///spot/NdDaniel/Code/42/Libft/libft.h).
* O [Makefile](file:///spot/NdDaniel/Code/42/Libft/Makefile) gerencia todo o ciclo de build da biblioteca.

---

## ⚙️ Instruções de Compilação

O projeto pode ser compilado de maneira flexível utilizando a ferramenta `make`:

```bash
# Compilar apenas as funções principais (Partes 1 e 2)
make

# Compilar a biblioteca completa (incluindo Listas, ft_printf, get_next_line e utilitários extras)
make bonus

# Limpar apenas os arquivos objeto (.o) gerados durante o processo
make clean

# Remover os arquivos objeto e o binário estático compilado (libft.a)
make fclean

# Recompilar a biblioteca totalmente do zero
make re
```

Após o build (`make` ou `make bonus`), o arquivo estático `libft.a` é gerado na raiz do diretório.

---

## 🚀 Como Utilizar

Para utilizar a `libft.a` em seus projetos C locais:

1. Inclua o cabeçalho principal no seu arquivo fonte:
   ```c
   #include "libft.h"
   ```

2. Adicione os caminhos apropriados ao compilar o seu arquivo fonte com a biblioteca compilada:
   ```bash
   gcc -Wall -Wextra -Werror seu_programa.c -L. -lft -o seu_programa
   ```
   * O argumento `-L.` aponta para a pasta onde o `libft.a` se localiza, e o argumento `-lft` faz o link dinâmico/estático da biblioteca.*

---

## 📄 Licença

Este projeto é de código aberto sob a licença MIT. Para mais informações, leia o arquivo [LICENSE.txt](file:///spot/NdDaniel/Code/42/Libft/LICENSE.txt).

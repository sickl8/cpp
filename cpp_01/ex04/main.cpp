/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:08:08 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/24 16:00:24 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

class Node {
	public:
		size_t	val;
		Node	*next;
};

class Vector {
	public:
		Vector() {
			this->list = NULL;
			this->size = 0;
		};
		void	freeNode(Node *node) {
			if (node->next) {
				freeNode(node->next);
			}
			delete node;
		}
		~Vector() {
			freeNode(this->list);
		};
		void	push_back(size_t num) {
			Node	*_new = new Node;
			Node	**tracer = &this->list;

			_new->val = num;
			_new->next = NULL;
			while (*tracer != NULL) {
				tracer = &(*tracer)->next;
			}
			*tracer = _new;
		}
		Node	**head() {
			return &this->list;
		}
	private:
		Node	*list;
		//size_t	size;
};

typedef std::string string;

int		checkError(bool condition, string errMsg, std::ostream &s) {
	if (condition) {
		s << errMsg;
		return (1);
	}
	return (0);
}

void	checkError(bool condition, string errMsg, std::ostream &s, int ret) {
	if (condition) {
		s << errMsg;
		exit(ret);
	}	
}

int		main(int ac, char **av) {
	std::ostream &cerr = std::cerr;
	checkError(ac != 4, "Illegal number of arguments\n", cerr, 0);
	string filename = av[1];
	string s1 = av[2];
	string s2 = av[3];
	checkError(s1 == "" || s2 == "", "Input strings should not be empty\n", cerr, 0);
	std::ifstream	infile (filename, std::ifstream::binary);
	checkError(!infile.is_open(), "Unable to open input file\n", cerr, 0);
	infile.seekg (0, infile.end);
    int length = infile.tellg();
    infile.seekg (0, infile.beg);
    char * buffer = new char [length + 1];
	infile.read(buffer,length);
	buffer[length] = '\0';
	if (checkError(!infile, "A read error has occured\n", cerr)) {
		infile.close();
	}
	std::ofstream	outfile;
	outfile.open(filename + ".replace");
	if (checkError(!outfile.is_open(), "Unable to open output file\n", cerr)) {
		infile.close();
		return (0);
	}
	string buf = string(buffer);
	delete [] buffer;
	Vector	occurances;
	size_t	s1l = s1.length();
	size_t	index = -s1l;
	while (true) {
		index = buf.find(s1, index + s1l);
		if (index != std::string::npos) {
			occurances.push_back(index);
		} else {
			break ;
		}
	}
	string replaced = "";
	size_t begin = 0;
	string sub;
	for (Node **itr = occurances.head(); *itr != NULL; itr = &(*itr)->next) {
		sub = buf.substr(begin, (*itr)->val - begin);
		begin = (*itr)->val + s1l;
		replaced += (sub);
		replaced += (s2);
	}
	replaced += buf.substr(begin);
	outfile << replaced;
	outfile.close();
	infile.close();
}
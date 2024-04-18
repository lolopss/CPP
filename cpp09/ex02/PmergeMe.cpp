/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:33:12 by ldaniel           #+#    #+#             */
/*   Updated: 2024/04/18 13:54:44 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}


void    PmergeMe::addIntegers(int ac, char **av){
    for (int i = 1; i < ac; ++i) {
        std::stringstream ss(av[i]);
        int num;
        ss >> num;
        if (!ss.fail() && ss.eof() && num >= 0) {
            _deque.push_back(num);
            _vector.push_back(num);
        }
    }
}

// Explicit instantiation of printContainer for std::deque<int>
template void PmergeMe::printContainer(const std::deque<int>& container);
// Explicit instantiation of printContainer for std::vector<int>
template void PmergeMe::printContainer(const std::vector<int>& container);

template<typename Container>
void PmergeMe::printContainer(const Container& container) {
    typename Container::const_iterator it;
    std::cout << "Container : ";
    for (it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

std::deque<int> PmergeMe::get_deque(){
    return this->_deque;
}
std::vector<int> PmergeMe::get_vector(){
    return this->_vector;
}

#include "PmergeMe.hpp"
#include <iostream>
#include <ctime>

// Helper function for merge sort
template<typename Container>
void merge(Container& container, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = container[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = container[mid + 1 + j];

    // Merge the temporary arrays back into container[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            container[k] = L[i];
            i++;
        } else {
            container[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        container[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        container[k] = R[j];
        j++;
        k++;
    }
}

// Main merge sort function
template<typename Container>
void mergeSort(Container& container, int left, int right) {
    if (left < right) {
        // Same as (left+right)/2, but avoids overflow for large left and right
        int mid = left + (right - left) / 2;
        // Sort first and second halves
        mergeSort(container, left, mid);
        mergeSort(container, mid + 1, right);
        // Merge the sorted halves
        merge(container, left, mid, right);
    }
}

void PmergeMe::sortDeque() {
    std::cout << "Sorting deque..." << std::endl;
    clock_t start = clock();

    mergeSort(_deque, 0, _deque.size() - 1);

    clock_t end = clock();
    double elapsedTime = double(end - start) / CLOCKS_PER_SEC;
    std::cout << "Time taken for deque sort: " << elapsedTime << " seconds" << std::endl;
}

void PmergeMe::sortVector() {
    std::cout << "Sorting vector..." << std::endl;
    clock_t start = clock();

    mergeSort(_vector, 0, _vector.size() - 1);

    clock_t end = clock();
    double elapsedTime = double(end - start) / CLOCKS_PER_SEC;
    std::cout << "Time taken for vector sort: " << elapsedTime << " seconds" << std::endl;
}


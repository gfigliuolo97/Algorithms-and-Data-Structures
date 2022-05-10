package it.giovannifigliuolo.sorting;

import java.util.ArrayList;
import java.util.Random;

public class MergeSort {
	private static void merge(ArrayList<Integer> array, ArrayList<Integer> leftArr, ArrayList<Integer> rightArr, int left, int right) {
		int i = 0, j=0, k = 0;
		
		while(i< left && j < right) {
			if(leftArr.get(i) <= rightArr.get(j)) {
				array.set(k++, leftArr.get(i++));
			}else {
				array.set(k++,  rightArr.get(j++));
			}
		}
		
		while( i< left) {
			array.set(k++, leftArr.get(i++));
		}
		while( j< right) {
			array.set(k++, rightArr.get(j++));
		}
	}
	private static void mergeSort(ArrayList<Integer> arrayToSort, int n){
		if(n > 1) {
			int middle = n / 2;
	
			ArrayList<Integer> leftArr = new ArrayList<Integer>();
			ArrayList<Integer> rightArr = new ArrayList<Integer>();
			
			for( int i = 0; i< middle; i++) {
				leftArr.add(i, arrayToSort.get(i));
			}
			for( int i = middle; i< n; i++) {
				rightArr.add(i - middle, arrayToSort.get(i));
			}
			
			mergeSort(leftArr, middle);
			mergeSort(rightArr, n-middle);
			
			merge(arrayToSort, leftArr, rightArr, middle, n-middle);
		}else {
			return;
		}
		
	}
	public static void main(String[] args) {
		final int MAX_INTEGER = 1000;
		final int ELEMENTS_NUMBER = 15;
		
		ArrayList<Integer> array = new ArrayList<Integer>();
		int i = 0;
		
		while(i<ELEMENTS_NUMBER) {
			array.add(new Random().nextInt(MAX_INTEGER));
			i++;
		}
		
		System.out.println("Initial array");
		System.out.println(array.toString());
		mergeSort(array, array.size());
		System.out.println("\nSorted");
		System.out.println(array.toString());
		
		
		
	}

}

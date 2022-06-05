package ex;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {


    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String str = br.readLine();

        int n = str.length();
        int[] arr = new int[26];
        for(int i = 0; i < n; i++){
            int idx = str.charAt(i) - 'a';
            arr[idx] += 1;
        }


        for (int i = 0; i < 26; i++){
            System.out.print(arr[i] + " ");
        }


    }
}
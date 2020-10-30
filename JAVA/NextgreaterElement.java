package Lec_14;

import Lec_13.*;
//GAme of numbers
public class nextgreaterelement {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		int a[] = { 2, 6, 8, 3, 15, 10 };
		// next(a);
		int ans[] = next2(a);
		for (int val : ans) {
			System.out.println(val);
		}

	}

	public static void next(int a[]) throws Exception {
		Stack s = new Stack(100);
		// s.push(a[0]);
		for (int i = 0; i < a.length; i++) {
			while (!(s.isEmpty()) && s.peek() < a[i]) {

				System.out.println(s.pop() + "->" + a[i]);

			}
			s.push(a[i]);
		}
		while (!(s.isEmpty())) {

			System.out.println(s.pop() + "-> -1");

		}

	}

	public static int[] next2(int a[]) throws Exception { // complete
		int ans[] = new int[a.length];
		Stack s = new Stack(100);
		// s.push(a[0]);
		for (int i = 0; i < a.length; i++) {
			while (!(s.isEmpty()) && a[s.peek()] < a[i]) {

				ans[s.pop()] = a[i];

			}

			s.push(i);
		}
		while (!(s.isEmpty())) {

			ans[s.pop()] = -1;
		}
		return ans;
	}

}

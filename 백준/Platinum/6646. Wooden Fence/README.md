# [Platinum IV] Wooden Fence - 6646 

[문제 링크](https://www.acmicpc.net/problem/6646) 

### 성능 요약

메모리: 2100 KB, 시간: 156 ms

### 분류

브루트포스 알고리즘, 기하학, 볼록 껍질

### 제출 일자

2026년 2월 28일 02:07:52

### 문제 설명

<p>Did you ever wonder what happens to your money when you deposit them to a bank account? All banks hold such deposits in various assets, such as gold, stocks, obligations, deposits in other banks, loans, bonds, and many others. Due to the financial crisis and instability of the stock exchanges, many banks find out that stocks are not very reliable and their possession may be too risky.</p>

<p>Therefore, the banks now prefer other assets, especially gold. The main trouble with gold is that there is only a limited amount of it in the whole world. And it is not enough to cover all money held by all banks. (Wait, isn’t this the real reason of the crisis?)</p>

<p>If there is not enough gold, other commodities must be exploited instead. The International Bank of Monetania (IBM) has recently come up with an idea of using very old and valuable trees as their assets. They bought a piece of land with several such trees and now expect their value to grow. Literally, of course.</p>

<p>Unfortunately, the trees are threatened by wildlife, because animals do not understand their value and nibble them. Moreover, there is a permanent danger of theft. As a result, it is absolutely necessary to build a good solid fence around the trees.</p>

<p>The IBM quickly realized that the only suitable material available to build the fence is the wood from the trees themselves. In other words, it is necessary to cut down some trees in order to build a fence around the remaining ones. Of course, to keep the maximum value, we want to minimize the value of the trees that had to be cut. You are to write a program that solves this problem.</p>

### 입력 

 <p>The input contains several test cases, each of which describes one piece of land. Each test case begins with a line containing a single integer N, 2 ≤ N ≤ 16, the total number of trees. Each of the subsequent N lines contains 4 integers Xi, Yi, Vi, Li separated by at least one space.</p>

<p>The four numbers describe a single tree. (X<sub>i</sub>, Y<sub>i</sub>) is the position of the tree in the plane, V<sub>i</sub> is its value, and L<sub>i</sub> is the length of fence that can be built using the wood of the tree. You may assume that 0 ≤ V<sub>i</sub>, L<sub>i</sub> ≤ 10 000 and −10 000 ≤ X<sub>i</sub>, Y<sub>i</sub> ≤ 10 000. No two trees in a test case will grow at the same position.</p>

<p>The input ends with a line containing zero in place of N.</p>

### 출력 

 <p>For each test case, compute a subset of the trees such that, using the wood from that subset, the remaining trees can be enclosed in a single continuous fence. Find the subset with the minimal total value. For simplicity, regard the trees as having zero diameter.</p>

<p>Output one line with the sentence “The lost value is T.”, where T is the minimal value of the trees that must be cut.</p>


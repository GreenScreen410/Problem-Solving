# [Platinum I] Base Stations - 14192 

[문제 링크](https://www.acmicpc.net/problem/14192) 

### 성능 요약

메모리: 6836 KB, 시간: 304 ms

### 분류

볼록 껍질, 기하학, 회전하는 캘리퍼스, 두 포인터

### 제출 일자

2024년 9월 26일 08:51:15

### 문제 설명

<p>The Viracell Telecommunication is the largest mobile network operator in Nevercity. To better serve its customers, the operator has mounted a large number of Base Transceiver Stations (BTSs) throughout the city. Each BTS operates in one of the fixed predefined frequencies.</p>

<p>Due to rapid expansion of the network over the past few years, the quality of the service has been downgraded, causing many complaints from the customers. As a result, the national regulatory has decided to investigate the issue and prepare an official report. To this end, the regulatory has asked the operator to mount two special receivers provided by the regulatory on two BTSs in order to collect signaling data from all BTSs for further investigation. The operator is free to choose on which BTSs to mount the two receivers. Being short in time, the operator has hired you to consult them where to mount the receivers to achieve the best results.</p>

<p>According to your findings, the best results can be only achieved when the two receivers have minimum signal interference. You have also found two simple rules for reducing the signal interference. The first rule is that the receivers must be mounted on two BTSs with different frequencies. The second rule is that the receivers must be placed as far as possible. Therefore, your recommendation to the operator is to mount the receivers on the farthest pair of BTSs with different frequencies. The operator is now asking you to find such a pair.</p>

### 입력 

 <p>There are multiple test cases in the input. The first line of each test case contains a positive integer n indicating the number of BTSs in the test case (2 ≤ n ≤ 100, 000). The next n lines, each contains three integers x, y, and k, where (x, y) indicates the location of a BTS, and k indicates its frequency number (0 ≤ x, y ≤ 10, 000, 0 ≤ k < 100). Each frequency number refers to one of the 100 predefined different frequencies in the network. It is assumed that there are at least two BTSs with different frequencies in each test case. Note that different BTSs may have the same location. The input terminates with a line containing 0 which should not be processed.</p>

### 출력 

 <p>For each test case, output a line containing the square of the distance of the farthest pair of BTSs with different frequencies.</p>


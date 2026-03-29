2) 피보나치 복잡도

<img width="1618" height="777" alt="5" src="https://github.com/user-attachments/assets/fc93c9f1-8c55-4453-8ff0-4ef5abd2abbb" />
<img width="1616" height="779" alt="10" src="https://github.com/user-attachments/assets/1aeda894-3d9b-444c-8e3e-45195cd0c328" />
<img width="1618" height="769" alt="20" src="https://github.com/user-attachments/assets/21aeada1-0188-4534-b736-dc129ab9e019" />
<img width="1623" height="772" alt="30" src="https://github.com/user-attachments/assets/5dc89fc3-ef6d-4885-a294-5cb5f950a1a9" />
위 사진부터 5, 10, 20, 30의 값을 넣었을 때 나오는 시간을 보여준다 이를 그래프로 환산하면

<img width="1249" height="711" alt="그래프" src="https://github.com/user-attachments/assets/82b63bec-6381-43ee-8353-0ada23c9c056" />
이렇게 일정하게 증가하는 그래프가 그려지고 이는 시간복잡도 O(n)를 가진다.

피보나치 수를 찾는 반복문 for문은 n번의 실행을 한 시간복잡도 O(n)의 값을 가지지만, 최대공약수를 찾는 함수는 log(n)을 따른다 하지만 왜 O(n)가 나올까?

이는 최대 공약수 찾는 알고리즘에서 최대 반복횟수를 가지는 값은  피보나치 수 f(n-1)값을
나누는 경우이기 때문인데, 그 이유는 두 수의 나머지는 f(n-2)값을 가지기 때문이다.

그렇기 때문에 n이 0이 되는 순간 까지 반복하게 되면 결국 횟수는 우리가 입력한 n이 된다.

즉, 두 피보나치 수에 최대 공약수를 반복 하는 횟수의 시간 복잡도는 O(n)이다.

이를 1번 과제 코드로 확인해 보았다.

임의로 뽑은 숫자 18을 최대공약수 알고리즘을 사용했을 때 최대 반복 횟수를 사용한 숫자는 11이다. 최대 반복 횟수를 사용한 수를 다시 알고리즘을 돌려본다면 이렇게 나온다. 

<img width="715" height="438" alt="18-1" src="https://github.com/user-attachments/assets/b66e8dd0-0828-4394-b84a-85cc1b48e7ff" />
<img width="429" height="290" alt="18-2" src="https://github.com/user-attachments/assets/8f4ddbf9-b05e-47fd-b928-e2d62bc0e6c6" />
<img width="420" height="199" alt="18-3" src="https://github.com/user-attachments/assets/6a67f087-1cbd-41f1-871c-59777d43d74e" />
<img width="389" height="140" alt="18-4" src="https://github.com/user-attachments/assets/49784d3e-06e9-46d6-90ee-eedb5a4751a2" />


즉 최대공약수를 찾는 알고리즘의 시간복잡도는 [최선O(1), 평균log(n), 최악log(n) = 피보나치 역순] 을 갖는다.

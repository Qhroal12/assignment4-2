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


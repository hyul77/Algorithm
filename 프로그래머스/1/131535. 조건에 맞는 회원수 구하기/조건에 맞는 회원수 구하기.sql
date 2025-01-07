-- 코드를 입력하세요
select count(*) AS USERS
from USER_INFO
where (AGE >=20) and (AGE < 30)
and YEAR(JOINED) = 2021
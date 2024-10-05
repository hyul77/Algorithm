-- 코드를 입력하세요
select 
YEAR(OS.SALES_DATE) AS YEAR, 
MONTH(OS.SALES_DATE) AS MONTH, 
count(distinct (OS.USER_ID)) AS PURCHASED_USERS, 
ROUND(count(distinct (OS.USER_ID)) / (select distinct count(UI2.USER_ID) from USER_INFO UI2 where YEAR(UI2.JOINED)=2021), 1) AS PUCHASED_RATIO
from USER_INFO  UI
right join ONLINE_SALE OS on UI.USER_ID = OS.USER_ID
where 1=1
and YEAR(UI.JOINED) = 2021
group by YEAR, MONTH
order by YEAR ASC, MONTH ASC;
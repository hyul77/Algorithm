-- 코드를 입력하세요
SELECT BO.CATEGORY, SUM(BS.SALES) AS TOTAL_SALES
from BOOK BO
join BOOK_SALES BS on BO.BOOK_ID = BS.BOOK_ID
where YEAR(BS.SALES_DATE) = 2022
and MONTH(BS.SALES_DATE) = 1
group by BO.CATEGORY
order by BO.CATEGORY ASC;
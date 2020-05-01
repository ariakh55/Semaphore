# Semaphore
Semaphore is simply a **variable** or **abstract data type** used in multiproccessing. This variable is used to solve critical section problems and to achieve process synchronization in the multi processing environment. A trivial semaphore is a plain variable that is changed (for example, incremented or decremented, or toggled) depending on programmer-defined conditions.

<div dir="rtl">

# سمافور (نشان بر) چیست؟
<br/>
متغیر یا مقداری است که در محیط های چند پردازشی یا همروند مورد استفاده قرار می گیرد و کار سمافور این است که به همه پردازش ها مقدار یکسانی را بدهد.
<br/>
<br/>
برای درک بهتر مفهوم بالا بهتر است به مثال زیر توجه کنید :

## مثال ۱ :
یک کتابخانه دانشگاه را فرض بگیرید که در آن اتاق هایی برای مطالعه دانشجو ها وجود دارد تعداد این اتاق ها ۳۰ عدد است و تعداد دانشجویان موجود ۱۰۰ نفر حال ما به دانشجویان این اتاق ها را می دهیم و ۳۰ نفر اول از طریق پیشخوان یا پذیرش کتابخانه اتاق هارا دریافت می کند پیشخوان یا پذیرش اتاق های درحال استفاده را کم می کند از مقداراتاق های موجود حال اگر کار ۵ دانشجو با اتاق ها تمام شود به پذیرش اعلام می کند و پذیرش ۵ نفر بعدی را به اتاق ها هدایت می کند البته لازم به ذکر است که الویت با کسی است که زود تر به اتاق های مورد نظر آمده است.

<div dir="ltr">

[Source Code Example1.][Github Example1]

</div>

برای درک بهتر سورس کد ۱ بهتر است به sleep های سورس کد توجه کنید.

[Github Example1]: https://github.com/ariakh55/Semaphore/blob/master/Example01.c

>آریا خوشنود - امید رضا کشتکار
</div>
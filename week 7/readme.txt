B
1.
*p3 = B , p3 = 0x5678
*p3 = A , p3 = 0x1234
*p1 = B , p1 = 0x1234
2.
*p = 5
3.
char c = ‘C';
double *p = &c;

lỗi do double *p là khai báo con trỏ tới biến ( ở đây là c) chứ không phải địa chỉ của biến &c;
sửa thành double *p = c;

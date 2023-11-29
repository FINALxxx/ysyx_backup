//WARN:
// 需要使用者提供键值对的数量NR_KEY, 键值的位宽KEY_LEN以及数据的位宽DATA_LEN这三个参数, 并保证端口的信号宽度与提供的参数一致, 否则将会输出错误的结果
// 若列表中存在多个键值为key的数据, 则out的值是==未定义==的, 需要使用者来保证列表中的键值互不相同

module MuxKeyWithDefault #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 1) i0 (out, key, default_out, lut);
endmodule

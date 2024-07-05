TypeScript ***компилируется в чистый*** JavaScript. JavaScript используется для написания пользовательских скриптов ( как в браузере так и на сервере ).


## Не используйте undefined для обозначения валидности

### ужасная функция:
```javascript
function toInt(str:string) {
  return str ? parseInt(str) : undefined;
}
```
### намного лучше:
```javascript
function toInt(str: string): { valid: boolean, int?: number } {
  const int = parseInt(str);
  if (isNaN(int)) {
    return { valid: false };
  }
  else {
    return { valid: true, int };
  }
}
```

В JavaScript есть только один числовой тип. ***Это 64-битный Number с двойной точностью***.

Ограничения для целых чисел представлены встроенным числовым типом и составляют Number.`MAX_SAFE_INTEGER` и Number.`MIN_SAFE_INTEGER`

```javascript
console.log({max: Number.MAX_SAFE_INTEGER, min: Number.MIN_SAFE_INTEGER});
// {max: 9007199254740991, min: -9007199254740991}
```

### Проверка на равенство не работает с NaN. Используейте `Number.isNaN`:
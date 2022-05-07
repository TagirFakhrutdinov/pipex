# pipex
Цель данного проекта детальное рассмотрение UNIX механизма `pipe`.

Программа `pipex` должна повторять поведение следующей команды оболочки
```bash
$> < file1 cmd1 | cmd2 > file2
```
и выглядеть следующим образом:
```bash
$> ./pipex file1 cmd1 cmd2 file2
```
Необходимо обрабатывать все ошибки, такие как: неправильные команды, отсутствие необходимых прав у файлов и т.д.

[Методичка | Subject](https://github.com/TagirFakhrutdinov/pipex/blob/master/pipex_subject.pdf)

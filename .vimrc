set nu

"들여쓰기
set tabstop=4
set shiftwidth=4

"자동 들여쓰기 지원
set cindent
set autoindent

"색상 지정. c/c++/java등의 소스 작성 시 예약어는 색상 변경
colorscheme default

"imap은 insert mode에서 사용하는 맵
" <cr>: 캐리지리턴 (엔터)
" :edit 다시 로드 (!를 붙이면 변경사항 무시)
imap <F2> <ESC>:w<cr>:! chmod +x %<cr><ESC>:edit!<cr><ESC>:! clear; ./%; echo ; echo -n "Press enter key"; read<cr>a

" ctrl+s
imap <C-S> <ESC>:w!<cr>a

" ctrl+c
imap <C-C> <ESC>yya
" ctrl+v
imap <C-V> <ESC>pa
" ctrl+d
imap <C-D> <ESC>dda
" ctrl+z
imap <C-Z> <ESC>ua

"C언어 자동 들여쓰기
imap <F8> <ESC><S-G>=ggi


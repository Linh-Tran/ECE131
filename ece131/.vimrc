set nocompatible
source $VIMRUNTIME/vimrc_example.vim

" Don't use tabs (except for Makefiles)
set expandtab

" Indents depend on language; every language has its own culture
" You can learn what Vim calls the file type by the command
" :set filetype?
autocmd FileType c    setlocal shiftwidth=4 tabstop=4
autocmd FileType cpp  setlocal shiftwidth=4 tabstop=4
autocmd FileType ruby setlocal shiftwidth=2 tabstop=2
autocmd FileType html setlocal shiftwidth=2 tabstop=2
autocmd FileType java setlocal shiftwidth=4 tabstop=4

" Don't highlight search hits; it's annoying and hard to turn off
set nohlsearch

" A better status line
set statusline=%<%f\ %h%m%r%=%-14.(%l,%c%V%)\ %P
set laststatus=2

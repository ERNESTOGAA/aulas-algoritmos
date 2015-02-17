" All system-wide defaults are set in $VIMRUNTIME/debian.vim and sourced by
" the call to :runtime you can find below.  If you wish to change any of those
" settings, you should do it in this file (/etc/vim/vimrc), since debian.vim
" will be overwritten everytime an upgrade of the vim packages is performed.
" It is recommended to make changes after sourcing debian.vim since it alters
" the value of the 'compatible' option.

" This line should not be removed as it ensures that various options are
" properly set to work with the Vim-related packages available in Debian.
runtime! debian.vim

" Uncomment the next line to make Vim more Vi-compatible
" NOTE: debian.vim sets 'nocompatible'.  Setting 'compatible' changes numerous
" options, so any other options should be set AFTER setting 'compatible'.
"set compatible

set nocompatible              " be iMproved, required
filetype off                  " required

"mappings
let maplocalleader = "\\"
let mapleader = ","
imap jk <ESC> 
imap kj <ESC> 
map <Leader>q :q<CR>
map <Leader>w :w<CR>

" The following are commented out as they cause vim to behave a lot
" differently from regular Vi. They are highly recommended though.
set t_Co=256 " better color support
set expandtab
set showcmd		" Show (partial) command in status line.
set showmatch		" Show matching brackets.
set ignorecase		" Do case insensitive matching
set smartcase		" Do smart case matching
set incsearch		" Incremental search
set autowrite		" Automatically save before commands like :next and :make
set hidden		" Hide buffers when they are abandoned
set mouse=a		" Enable mouse usage (all modes)
set number		" Enable number
set autoread
set hlsearch    " highlight search
set nowrap
set textwidth=0         " Don't wrap lines by default
set wildmode=longest,list " At command line, complete longest common string,
set backspace=indent,eol,start  " more powerful backspacing
set tabstop=2    " Set the default tabstop
set softtabstop=2
set shiftwidth=2 " Set the default shift width for indents
set smarttab " Smarter tab levels
set ruler
set foldenable " Turn on folding
set foldmethod=marker " Fold on the marker
set foldlevel=100 " Don't autofold anything (but I can still fold manually)
set foldopen=block,hor,mark,percent,quickfix,tag " what movements open folds 
set splitbelow
set splitright
set mousehide

" set the runtime path to include Vundle and initialize
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()

Plugin 'gmarik/Vundle.vim' " let Vundle manage Vundle, required
Plugin 'kien/ctrlp.vim' " install ctrlp fuzzy search
Plugin 'scrooloose/nerdtree' " Install NerdTree
Plugin 'bling/vim-bufferline' " Show opened buffers 
Plugin 'bling/vim-airline' " Beatiful Status bar
Plugin 'Valloric/YouCompleteMe' " YouCompleteMe
Plugin 'tpope/vim-fugitive' " Vim with git functionalities :]
Plugin 'Syntastic' " Check the syntax 
Plugin 'SirVer/ultisnips' " snippets plugin
Plugin 'honza/vim-snippets' " Snippets
Plugin 'scrooloose/nerdcommenter' " comments
Plugin 'mattn/emmet-vim'
Plugin 'othree/html5.vim'

Bundle "EasyMotion"
Bundle "jQuery"
Bundle "rails.vim"
Bundle "Markdown"
Bundle "repeat.vim"
Bundle "surround.vim"
Bundle "SuperTab"
Bundle "Align"
Bundle "file-line"
"Bundle daylerees/colour-schemes, { rtp: vim/ }

Bundle "ZoomWin"
noremap <LocalLeader>o :ZoomWin<CR>
vnoremap <LocalLeader>o <C-C>:ZoomWin<CR>
inoremap <LocalLeader>o <C-O>:ZoomWin<CR>
noremap <C-W>+o :ZoomWin<CR>

call vundle#end()            " required
filetype plugin indent on    " required

" syntax on please!
if has("syntax")
	syntax on
endif

syntax on
colorscheme molokai "change colorscheme 
"set background=dark


"
" NerdTree Config
"
" open nerdtree if no file is set
autocmd StdinReadPre * let s:std_in=1
autocmd VimEnter * if argc() == 0 && !exists("s:std_in") | NERDTree | endif
" close when nerdtree is the only one
autocmd bufenter * if (winnr("$") == 1 && exists("b:NERDTreeType") && b:NERDTreeType == "primary") | q | endif   
" toogle nerdtree
map <C-n> :NERDTreeToggle<CR>


" fix powerline and config airline
au BufReadPost,BufEnter * :AirlineRefresh
python from powerline.vim import setup as powerline_setup
python powerline_setup()
python del powerline_setup
set laststatus=2
let g:airline_powerline_fonts=1
let g:airline_theme='hybrid'
let g:airline#extensions#tabline#enabled = 1
set noshowmode
set fillchars+=stl:\ ,stlnc:\



"syntastic config
let g:syntastic_check_on_wq=1
let g:syntastic_check_on_open=1
let g:syntastic_enable_signs=1
let g:syntastic_c_checkers = ['gcc', 'make']
let g:syntastic_c_compiler = 'gcc'
let g:syntastic_c_check_header = 1
let g:syntastic_c_auto_refresh_includes = 1
let g:syntastic_c_include_dirs = [ 'includes', 'headers' ]
let g:syntastic_c_compiler_options = ''
let g:syntastic_mode_map = { "mode": "active"}
let g:ycm_show_diagnostics_ui = 0

" youcompleteme config
let g:ycm_global_ycm_extra_conf = "~/.vim/.ycm_extra_conf.py"
let g:ycm_key_list_select_completion=['<Enter>', '<Down>']
let g:ycm_key_list_previous_completion=['<S><Enter>','<Up>']

" Trigger configuration. Do not use <tab> if you use
let g:UltiSnipsExpandTrigger="<Leader><Enter>"
let g:UltiSnipsJumpForwardTrigger="<Leader>b"
let g:UltiSnipsJumpBackwardTrigger="<Leader>z"

" If you want :UltiSnipsEdit to split your window.
let g:UltiSnipsEditSplit="vertical"



" Uncomment the following to have Vim jump to the last position when
" reopening a file
if has("autocmd")
	au BufReadPost * if line("'\"") > 1 && line("'\"") <= line("$") | exe "normal! g'\"" | endif
endif



" Uncomment the following to have Vim load indentation rules and plugins
" according to the detected filetype.
if has("autocmd")
	filetype plugin indent on
endif



" Source a global configuration file if available
if filereadable("/etc/vim/vimrc.local")
	source /etc/vim/vimrc.local
endif

"no backup
set nobackup
"set writebackup

"recarregar o vimrc
" Source the .vimrc or _vimrc file, depending on system
if &term == "win32" || "pcterm" || has("gui_win32")
	map <Leader>rc :e $HOME/_vimrc<CR>
	nmap <Leader>R :<C-u>source ~/_vimrc <BAR> echo "Vimrc recarregado!"<CR>
else
	map <Leader>rc :e $HOME/.vimrc<CR>
	nmap <Leader>R :<C-u>source ~/.vimrc <BAR> echo "Vimrc recarregado!"<CR>
endif

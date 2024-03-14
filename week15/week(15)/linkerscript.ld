MEMORY
{
 
  RAM    (xrw)    : ORIGIN = 0x20000000,   LENGTH = 20K
  FLASH  (rx)     : ORIGIN = 0x08000000,   LENGTH = 128K
}

/*intialize minimum size for stack*/
_MIN_SIZE_STACK = 0x400;


/*intialize minimum size for heap*/
_MIN_SIZE_HEAP = 0x200;

_estack = 0x20002800;


SECTIONS
{

  /*.isr_vector*/
.isr_vector :
{
. = ALIGN(4);
*(.isr_vector)
*(.isr_vector*)
. = ALIGN(4);

}>FLASH
/*.text section */
.text :
{   _stext = . ;
    . =  ALIGN(4);
    *(.text)
    *(.text*)
    . = ALIGN(4);
    _etext = . ;
}>FLASH

/*.rodata section*/
.rodata :
{    _srodata = . ;
     . = ALIGN(4);
    *(.rodata)
    *(.rodata*)
    . = ALIGN(4);
    _erodata = . ;
}>FLASH


_sidata = LOADADDR(.data);
/*.data section */
.data :
{   _sdata = . ;
      . = ALIGN(4);
    *(.data)
    *(.data*)
     . = ALIGN(4);
     _edata = . ;
}>RAM AT>FLASH
/*.bss section  */
.bss :
{   _sbss = . ;
       . = ALIGN(4);
    *(.bss)
    *(.bss*)
     . = ALIGN(4);
      _ebss = . ;
}>RAM


}
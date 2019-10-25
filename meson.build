project('sent', 'c',
        default_options: ['c_std=gnu18', 'buildtype=release', 'warning_level=3',
                          'b_lto=true', 'strip=true']
       )
x11_dep = dependency('x11')
xft_dep = dependency('xft')
freetype_dep = dependency('freetype2')
fontconf_dep = dependency('fontconfig')
cc = meson.get_compiler('c')
m_dep = cc.find_library('m', required: false)

src_files = [
  'src/drw.c',
  'src/sent.c',
  'src/utf8.c',
  'src/util.c'
]

executable('sent', sources: src_files,
           dependencies: [x11_dep, xft_dep, freetype_dep, fontconf_dep, m_dep],
           install: true)
install_man('sent.1')

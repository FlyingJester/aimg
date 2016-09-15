Import("environment")

src = [
    "image.c",
    "load_tga.c",
    "load_png.c",
    "save_png.c",
    "save_tga.c"
]

aimg = environment.StaticLibrary("aimg", src, LIBS = ["png"])

Return("aimg")

node-png
--------

This is a node.js module, writen in C++, that uses libpng to produce a PNG
image (in memory) from RGB or RGBA buffers. It was originally created
by [pkrumins](https://github.com/pkrumins/node-png).

The `Png` object is for creating PNG images from an RGB, RGBA, or Grayscale buffer.

Png
---

The `Png` object takes 5 arguments in its constructor:

``` javascript
var png = new Png(buffer, width, height, buffer_type, bits_per_pixel);
```

The first argument, `buffer`, is a node.js `Buffer` filled with RGB(A) values.
The second argument is integer width of the image.
The third argument is integer height of the image.
The fourth argument is 'rgb', 'bgr', 'rgba', 'bgra', or 'gray'. Defaults to 'rgb'.
The fifth argument is valid only when buffer_type='gray'. Valid arguments are 8 (default) and 16.

The constructed `png` object has the `encode` method that's asynchronous in nature.
You give it a callback and it will call your function with a node.js Buffer object
containing the encoded PNG data when it's done:

``` javascript
png.encode(function (png_image) {
    // ...
});
```

The constructed `png` object also has `encodeSync` method that does the encoding
synchronously and returns Buffer with PNG image data:

``` javascript
var png_image = png.encode();
```

You can either send the png_image to the browser, or write to a file, or
do something else with it. See `examples/` directory for some examples.

How to compile?
---------------

To get the node-png module compiled, you need to have libpng and node.js
installed. Then just run:

``` bash
    node-gyp configure build
```

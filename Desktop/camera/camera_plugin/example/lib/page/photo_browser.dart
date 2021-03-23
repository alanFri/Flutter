import 'dart:io';

import 'package:flutter/material.dart';
import 'package:photo_view/photo_view.dart';

class PhotoBrowserPage extends StatelessWidget {
  final String imagePath;

  const PhotoBrowserPage({Key key, this.imagePath}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: _buildBody(context),
    );
  }

  Widget _buildBody(BuildContext context) {
    return Stack(
      children: [
        PhotoView.customChild(
            child: Image.file(
          File(imagePath),
          width: MediaQuery.of(context).size.width,
        )),
        Positioned(
            top: 30,
            left: 10,
            child: InkWell(
              child: Icon(Icons.close),
              onTap: () => Navigator.of(context).pop(),
            )),
      ],
    );
  }
}

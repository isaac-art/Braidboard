(load "./braidboard/cell.lisp")

; CLASS
(defclass braidboard ()
  ((width  
      :initarg :width
      :initform 6
      :accessor braidboard-width)
    (height 
      :initarg :height
      :initform 6
      :accessor braidboard-height)
    (cells  
      :initarg :cells
      :accessor braidboard-cells)))

; CONSTRUCTOR
(defun make-braidboard (width height)
  (make-instance 'braidboard :width width :height height :cells (make-cells width height)))


import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  title = 'component';
  length = 20;
  
  Students : any[]  = ["Darshan","Jayesh","Dishant"];

  colorSelected : string = 'black';

// ----------------- ATTRIBUTE DIRECTIVE --------------------------
    // this is for ngStyle
    var_bg = 'red';
}

import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  title = 'event';
  display(name:string ) {
    console.log('Name : ',name);
    alert(`${name} , your data has been Saved`)
  }
}
